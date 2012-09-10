//
//  ViewController.m
//  DiandianDemo
//
//  Created by Singro on 9/4/12.
//  Copyright (c) 2012 Singro. All rights reserved.
//

#import "ViewController.h"

#define AppKey @"sCaZIOOiL7"
#define AppSecret @"lj9a42Fd5lzpdSQXUEuFws5JOx11ZREjGezZ"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	
    engine = [[DDEngine alloc] initWithAppKey:AppKey appSecret:AppSecret];
    [engine setDelegate:self];
    
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeRoundedRect];
    [btn setFrame:CGRectMake(400, 500, 100, 30)];
    [btn setTitle:@"login" forState:UIControlStateNormal];
    [btn setTitle:@"LoginPressed" forState:UIControlStateHighlighted];
    [btn addTarget:self action:@selector(loginButtonPressed) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:btn];
//    [engine logOut];
//    [engine logInUsingUserID:@"test" password:@"test"];
    
}

- (void)loginButtonPressed {
    if ([engine isLoggedIn]) {
        NSLog(@"login.");
        [engine getPostsWithTag:@"点点"];
    } else {
        [engine logIn];
    }
}

- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
}

- (void)engineAlreadyLoggedIn:(DDEngine *)engine {
    ;
}

// Log in successfully.
- (void)engineDidLogIn:(DDEngine *)engine {
    ;
}

// Failed to log in.
// Possible reasons are:
// 1) Either username or password is wrong;
// 2) Your app has not been authorized by Sina yet.
- (void)engine:(DDEngine *)engine didFailToLogInWithError:(NSError *)error {
    ;
}

// Log out successfully.
- (void)engineDidLogOut:(DDEngine *)engine {
    ;
}

// When you use the DDEngine's request methods,
// you may receive the following four callbacks.
- (void)engineNotAuthorized:(DDEngine *)engine {
    ;//https://api.diandian.com/v1/tag/posts/点点?access_token=d2b52c7c-2e70-43fe-a138-94a3c9fdb5ce
}

- (void)engineAuthorizeExpired:(DDEngine *)engine {
//    [engine logOut];
    [engine logIn];
}

- (void)engine:(DDEngine *)engine requestDidFailWithError:(NSError *)error {
    NSLog(@"%@", error);
}

- (void)engine:(DDEngine *)engine requestDidSucceedWithResult:(id)result_ {
    NSDictionary *result = (NSDictionary *)result_;
    NSLog(@"%@", result);
}

@end
