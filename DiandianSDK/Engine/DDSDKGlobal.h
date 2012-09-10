//
//  DDSDKGlobal.h
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


#define kDDSDKErrorDomain           @"WeiBoSDKErrorDomain"
#define kDDSDKErrorCodeKey          @"WeiBoSDKErrorCodeKey"

#define kDDSDKAPIDomain             @"https://api.diandian.com/v1/"

typedef enum
{
	kDDErrorCodeInterface	= 100,
	kDDErrorCodeSDK         = 101,
}DDErrorCode;

typedef enum
{
	kDDSDKErrorCodeParseError       = 200,
	kDDSDKErrorCodeRequestError     = 201,
	kDDSDKErrorCodeAccessError      = 202,
	kDDSDKErrorCodeAuthorizeError	= 203,
}DDSDKErrorCode;