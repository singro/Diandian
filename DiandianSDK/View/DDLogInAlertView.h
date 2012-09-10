//
//  DDLogInAlertView.h
//  SinaWeiBoSDK
//  Based on OAuth 2.0
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
//  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
//  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
//  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
//  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
//  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
//  OTHER DEALINGS IN THE SOFTWARE.
//
//  Copyright 2011 Sina. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DDLogInAlertView;

@protocol DDLogInAlertViewDelegate <NSObject>

- (void)logInAlertView:(DDLogInAlertView *)alertView logInWithUserID:(NSString *)userID password:(NSString *)password;

@end

@interface DDLogInAlertView : UIAlertView 
{
    UITextField *userIDTextField;
    UITextField *passwordTextField;
    
    id<UIAlertViewDelegate, DDLogInAlertViewDelegate> delegate;
}

@property (nonatomic, assign) id<UIAlertViewDelegate, DDLogInAlertViewDelegate> delegate;

@end
