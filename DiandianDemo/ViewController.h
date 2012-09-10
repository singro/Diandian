//
//  ViewController.h
//  DiandianDemo
//
//  Created by Singro on 9/4/12.
//  Copyright (c) 2012 Singro. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DDEngine.h"

@interface ViewController : UIViewController <DDEngineDelegate> {
    DDEngine *engine;
}

@end
