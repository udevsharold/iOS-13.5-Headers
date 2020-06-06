/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKSession <NSObject>
@property (nonatomic,readonly) unsigned long long state; 
@property (assign,nonatomic,__weak) id<PKSessionDelegate> delegate; 
@required
-(id<PKSessionDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(unsigned long long)state;
-(void)endSession;

@end

