/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MLTaskStateTransitionDelegate <NSObject>
@required
-(void)onResumptionWithTaskContext:(id)arg1;
-(void)onSuspensionWithTaskContext:(id)arg1;
-(void)onCancellation;
-(void)onCompletionWithTaskContext:(id)arg1;
-(void)onFailureWithTaskContext:(id)arg1;

@end

