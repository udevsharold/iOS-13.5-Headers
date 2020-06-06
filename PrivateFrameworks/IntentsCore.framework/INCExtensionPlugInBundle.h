/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface INCExtensionPlugInBundle : NSObject {

	Class _principalClass;
	NSSet* _intentsSupported;
	NSSet* _intentsRestrictedWhileLocked;

}

@property (nonatomic,readonly) Class principalClass;                                   //@synthesize principalClass=_principalClass - In the implementation block
@property (nonatomic,copy,readonly) NSSet * intentsSupported;                          //@synthesize intentsSupported=_intentsSupported - In the implementation block
@property (nonatomic,copy,readonly) NSSet * intentsRestrictedWhileLocked;              //@synthesize intentsRestrictedWhileLocked=_intentsRestrictedWhileLocked - In the implementation block
-(Class)principalClass;
-(NSSet *)intentsSupported;
-(NSSet *)intentsRestrictedWhileLocked;
-(id)initWithPrincipalClass:(Class)arg1 intentsSupported:(id)arg2 intentsRestrictedWhileLocked:(id)arg3 ;
@end

