/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, UIResponder;

@interface _UIResponder_Override_Host : NSObject {

	NSMutableArray* _overrides;
	UIResponder* _owner;

}

@property (nonatomic,__weak,readonly) UIResponder * owner;              //@synthesize owner=_owner - In the implementation block
+(id)hostForResponder:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(UIResponder *)owner;
-(void)attachOverrider:(id)arg1 forTypes:(long long)arg2 ;
-(void)detachOverrider:(id)arg1 forTypes:(long long)arg2 ;
-(long long)typesForResponder:(id)arg1 ;
@end

