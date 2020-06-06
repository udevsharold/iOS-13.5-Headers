/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIRemoteView, BKSTouchDeliveryPolicyAssertion, PGHostedWindowHostingHandle;

@interface PGLayerHostView : UIView {

	_UIRemoteView* _remoteView;
	BKSTouchDeliveryPolicyAssertion* _touchDeliveryPolicyAssertion;

}

@property (nonatomic,retain) PGHostedWindowHostingHandle * hostedWindowHostingHandle; 
@property (assign,nonatomic) CGAffineTransform layerHostTransform; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)setHostedWindowHostingHandle:(PGHostedWindowHostingHandle *)arg1 ;
-(PGHostedWindowHostingHandle *)hostedWindowHostingHandle;
-(void)_manageSharingOfTouchesBetweenClientAndHostContext;
-(CGAffineTransform)layerHostTransform;
-(void)setLayerHostTransform:(CGAffineTransform)arg1 ;
@end

