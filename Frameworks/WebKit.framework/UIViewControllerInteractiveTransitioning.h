/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIViewControllerInteractiveTransitioning <NSObject>
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
@optional
-(double)completionSpeed;
-(long long)completionCurve;
-(BOOL)wantsInteractiveStart;

@required
-(void)startInteractiveTransition:(id)arg1;

@end

