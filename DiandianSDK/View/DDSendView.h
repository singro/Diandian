//
//  DDSendView.h
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
#import <QuartzCore/QuartzCore.h>

#import "DDEngine.h"

@class DDSendView;

@protocol DDSendViewDelegate <NSObject>

@optional

- (void)sendViewWillAppear:(DDSendView *)view;
- (void)sendViewDidAppear:(DDSendView *)view;
- (void)sendViewWillDisappear:(DDSendView *)view;
- (void)sendViewDidDisappear:(DDSendView *)view;

- (void)sendViewDidFinishSending:(DDSendView *)view;
- (void)sendView:(DDSendView *)view didFailWithError:(NSError *)error;

- (void)sendViewNotAuthorized:(DDSendView *)view;
- (void)sendViewAuthorizeExpired:(DDSendView *)view;

@end


@interface DDSendView : UIView <UITextViewDelegate, DDEngineDelegate> 
{
    
    UITextView  *contentTextView;
    UIImageView *contentImageView;
    
    UIButton    *sendButton;
    UIButton    *closeButton;
    UIButton    *clearTextButton;
    UIButton    *clearImageButton;
    
    UILabel     *titleLabel;
    UILabel     *wordCountLabel;
    
    UIView      *panelView;
    UIImageView *panelImageView;
    
    NSString    *contentText;
    UIImage     *contentImage;
    
    UIInterfaceOrientation previousOrientation;
    
    BOOL        isKeyboardShowing;
    
    DDEngine    *engine;
    
    id<DDSendViewDelegate> delegate;
}

@property (nonatomic, retain) NSString *contentText;
@property (nonatomic, retain) UIImage *contentImage;
@property (nonatomic, assign) id<DDSendViewDelegate> delegate;

- (id)initWithAppKey:(NSString *)appKey appSecret:(NSString *)appSecret text:(NSString *)text image:(UIImage *)image;

- (void)show:(BOOL)animated;
- (void)hide:(BOOL)animated;

@end
