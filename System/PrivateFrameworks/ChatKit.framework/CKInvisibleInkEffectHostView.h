/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIImage;


@protocol CKInvisibleInkEffectHostView
@property (nonatomic,readonly) Class invisibleInkEffectViewClass; 
@property (nonatomic,readonly) UIImage * imageForInvisibleInkEffectView; 
@required
-(Class)invisibleInkEffectViewClass;
-(void)invisibleInkEffectViewWasUncovered;
-(void)attachInvisibleInkEffectView;
-(void)detachInvisibleInkEffectView;
-(void)invisibleInkEffectViewWasSuspended;
-(void)invisibleInkEffectViewWasResumed;
-(UIImage *)imageForInvisibleInkEffectView;

@end

