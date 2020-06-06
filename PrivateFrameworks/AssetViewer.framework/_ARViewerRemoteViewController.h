/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/ARViewerHostProtocol.h>

@protocol ARViewerHostProtocol;
@class NSString;

@interface _ARViewerRemoteViewController : _UIRemoteViewController <ARViewerHostProtocol> {

	id<ARViewerHostProtocol> _arviewerDelegate;

}

@property (retain) id<ARViewerHostProtocol> arviewerDelegate;              //@synthesize arviewerDelegate=_arviewerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(oneway void)setStatusBarOrientation:(long long)arg1 ;
-(oneway void)isIgnoringInteractionEvents:(/*^block*/id)arg1 ;
-(oneway void)statusBarOrientation:(/*^block*/id)arg1 ;
-(id<ARViewerHostProtocol>)arviewerDelegate;
-(void)setArviewerDelegate:(id<ARViewerHostProtocol>)arg1 ;
@end

