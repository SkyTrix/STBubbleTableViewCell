//
//  AppDelegate.m
//  STBubbleTableViewCellDemo
//
//  Created by Cedric Vandendriessche on 24/08/13.
//  Copyright 2013 FreshCreations. All rights reserved.
//

#import "AppDelegate.h"
#import "STBubbleTableViewCellDemoViewController.h"

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    
    STBubbleTableViewCellDemoViewController *demoViewController = [STBubbleTableViewCellDemoViewController new];
    self.navigationController = [[UINavigationController alloc] initWithRootViewController:demoViewController];
    self.window.rootViewController = self.navigationController;
    
    [self.window makeKeyAndVisible];
    return YES;
}

@end
