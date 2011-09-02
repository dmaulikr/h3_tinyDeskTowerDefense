//
//  TinyDeskTowerDefenseAppDelegate.h
//  TinyDeskTowerDefense
//
//  Created by korch on 9/2/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TinyDeskTowerDefenseViewController;

@interface TinyDeskTowerDefenseAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet TinyDeskTowerDefenseViewController *viewController;

@end
