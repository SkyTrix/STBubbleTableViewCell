//
//  STBubbleTableViewCell.h
//  STBubbleTableViewCellDemo
//
//  Created by Cedric Vandendriessche on 24/08/13.
//  Copyright 2013 FreshCreations. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol STBubbleTableViewCellDataSource, STBubbleTableViewCellDelegate;

extern const CGFloat STBubbleWidthOffset; // Extra width added to bubble
extern const CGFloat STBubbleImageSize; // The size of the image

typedef NS_ENUM(NSUInteger, AuthorType) {
	STBubbleTableViewCellAuthorTypeSelf = 0,
	STBubbleTableViewCellAuthorTypeOther
};

typedef NS_ENUM(NSUInteger, BubbleColor) {
	STBubbleTableViewCellBubbleColorGreen = 0,
	STBubbleTableViewCellBubbleColorGray = 1,
	STBubbleTableViewCellBubbleColorAqua = 2, // Default value of selectedBubbleColor
	STBubbleTableViewCellBubbleColorBrown = 3,
	STBubbleTableViewCellBubbleColorGraphite = 4,
	STBubbleTableViewCellBubbleColorOrange = 5,
	STBubbleTableViewCellBubbleColorPink = 6,
	STBubbleTableViewCellBubbleColorPurple = 7,
    STBubbleTableViewCellBubbleColorRed = 8,
	STBubbleTableViewCellBubbleColorYellow = 9
};

@interface STBubbleTableViewCell : UITableViewCell

@property (nonatomic, strong, readonly) UIImageView *bubbleView;
@property (nonatomic, assign) AuthorType authorType;
@property (nonatomic, assign) BubbleColor bubbleColor;
@property (nonatomic, assign) BubbleColor selectedBubbleColor;
@property (nonatomic, assign) BOOL canCopyContents; // Defaults to YES
@property (nonatomic, assign) BOOL selectionAdjustsColor; // Defaults to YES
@property (nonatomic, weak) id <STBubbleTableViewCellDataSource> dataSource;
@property (nonatomic, weak) id <STBubbleTableViewCellDelegate> delegate;

@end

@protocol STBubbleTableViewCellDataSource <NSObject>
@optional
- (CGFloat)minInsetForCell:(STBubbleTableViewCell *)cell atIndexPath:(NSIndexPath *)indexPath;
@end

@protocol STBubbleTableViewCellDelegate <NSObject>
@optional
- (void)tappedImageOfCell:(STBubbleTableViewCell *)cell atIndexPath:(NSIndexPath *)indexPath;
@end
