/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UICursorArbiterCore <NSObject>
@property (nonatomic,readonly) long long pointerState; 
@required
-(long long)pointerState;
-(void)applyStyle:(id)arg1 forRegion:(id)arg2 effectSourceHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4;
-(void)resetStyleForRegion:(id)arg1 completion:(/*^block*/id)arg2;
-(void)requestAutohide;
-(void)beginScrollingWithRegion:(id)arg1;
-(void)endScrollingWithRegion:(id)arg1;

@end

