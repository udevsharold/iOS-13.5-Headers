/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface DispatchGroupWrapper : NSObject {

	NSObject*<OS_dispatch_group> _dispatchGroup;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_group> dispatchGroup;              //@synthesize dispatchGroup=_dispatchGroup - In the implementation block
-(id)init;
-(void)dealloc;
-(void)executeWithDispatchGroup:(/*^block*/id)arg1 ;
-(void)notify:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_group>)dispatchGroup;
-(void)setDispatchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
@end

