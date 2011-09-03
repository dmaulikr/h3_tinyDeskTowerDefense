
#import <UIKit/UIKit.h>

@class TDTDViewController;

@interface TDTDAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    TDTDViewController *colorTrackingViewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet TDTDViewController *viewController;

@end

