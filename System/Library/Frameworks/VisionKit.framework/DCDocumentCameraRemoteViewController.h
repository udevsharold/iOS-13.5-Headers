/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VisionKit/VisionKit-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/DCDocumentCameraRemoteViewController.h>

@protocol DCDocumentCameraRemoteViewController
@required
-(void)dismiss;
-(void)didCancel:(id)arg1;
-(void)viewServicePreferredSizeDidChange:(CGSize)arg1;
-(void)viewControllerWasDismissed;
-(void)didFinishWithDocumentInfoCollection:(id)arg1;

@end


@protocol DCDocumentCameraPublicViewController;
@class UIViewController;

@interface DCDocumentCameraRemoteViewController : _UIRemoteViewController <DCDocumentCameraRemoteViewController> {

	UIViewController*<DCDocumentCameraPublicViewController> _publicViewController;

}

@property (assign,nonatomic,__weak) UIViewController*<DCDocumentCameraPublicViewController> publicViewController;                                     //@synthesize publicViewController=_publicViewController - In the implementation block
@property (getter=viewServiceViewController,nonatomic,readonly) id<DCDocumentCameraViewServiceViewController> viewServiceViewController; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)dismiss;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)didCancel:(id)arg1 ;
-(id<DCDocumentCameraViewServiceViewController>)viewServiceViewController;
-(void)setPublicViewController:(UIViewController*<DCDocumentCameraPublicViewController>)arg1 ;
-(void)viewServicePreferredSizeDidChange:(CGSize)arg1 ;
-(void)viewControllerWasDismissed;
-(void)didFinishWithDocumentInfoCollection:(id)arg1 ;
-(UIViewController*<DCDocumentCameraPublicViewController>)publicViewController;
@end
