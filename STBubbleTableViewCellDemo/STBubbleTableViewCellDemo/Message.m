//
//  Message.m
//  STBubbleTableViewCellDemo
//
//  Created by Cedric Vandendriessche on 24/08/13.
//  Copyright 2013 FreshCreations. All rights reserved.
//

#import "Message.h"

@implementation Message

+ (instancetype)messageWithString:(NSString *)message
{
	return [Message messageWithString:message image:nil];
}

+ (instancetype)messageWithString:(NSString *)message image:(UIImage *)image
{
	return [[Message alloc] initWithString:message image:image];
}

- (instancetype)initWithString:(NSString *)message
{
	return [self initWithString:message image:nil];
}

- (instancetype)initWithString:(NSString *)message image:(UIImage *)image
{
	self = [super init];
	if(self)
	{
		_message = message;
		_avatar = image;
	}
	return self;
}

@end
