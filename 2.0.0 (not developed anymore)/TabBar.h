/*
 TabBar.h

 Created by Jesse MacFadyen on 10-02-03.
 MIT Licensed

 Originally this code was developed my Michael Nachbaur
 Formerly -> PhoneGap :: UIControls.h
 Created by Michael Nachbaur on 13/04/09.
 Copyright 2009 Decaf Ninja Software. All rights reserved.

 API cleaned up and improved by Andreas Sommer (https://github.com/AndiDog/phonegap-ios-tabbar-plugin).
 */
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <UIKit/UITabBar.h>

// For older versions of Cordova, you may have to use: #import "CDVPlugin.h"
#import <Cordova/CDVPlugin.h>

@interface TabBar : CDVPlugin <UITabBarDelegate> {
	UITabBar* tabBar;

	NSMutableDictionary* tabBarItems;

	// Represents bounds as if started in portrait mode!
	CGRect	originalWebViewBounds;

    CGFloat navBarHeight;
    CGFloat tabBarHeight;
    bool tabBarAtBottom;
}

- (void)create:(NSArray*)arguments withDict:(NSDictionary*)options;
- (void)show:(NSArray*)arguments withDict:(NSDictionary*)options;
- (void)resize:(NSArray*)arguments withDict:(NSDictionary*)options;
- (void)hide:(NSArray*)arguments withDict:(NSDictionary*)options;
- (void)init:(NSArray*)arguments withDict:(NSDictionary*)options;
- (void)showItems:(NSArray*)arguments withDict:(NSDictionary*)options;
- (void)createItem:(NSArray*)arguments withDict:(NSDictionary*)options;
- (void)updateItem:(NSArray*)arguments withDict:(NSDictionary*)options;
- (void)selectItem:(NSArray*)arguments withDict:(NSDictionary*)options;

@end

@interface UITabBar (NavBarCompat)
@property (nonatomic) bool tabBarAtBottom;
@end