/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IAMApplicationContextProvider <NSObject>
@property (readonly) BOOL allowsModalMessageDisplay; 
@property (assign,nonatomic) double lastMessageDisplayTime; 
@optional
-(id)viewControllerForModalPresentation;
-(void)messageCoordinator:(id)arg1 didRequestAction:(id)arg2;
-(BOOL)allowsModalMessageDisplay;
-(id)presentationPolicyForPolicyGroup:(long long)arg1;
-(double)lastMessageDisplayTime;
-(void)setLastMessageDisplayTime:(double)arg1;

@required
-(id)contextPropertyWithName:(id)arg1;

@end

