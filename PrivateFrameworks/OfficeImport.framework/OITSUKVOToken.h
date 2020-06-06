/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSObject, NSString;

@interface OITSUKVOToken : NSObject {

	NSObject* _observer;
	NSObject* _target;
	NSString* _keyPath;
	void* _context;

}

@property (nonatomic,readonly) NSObject * observer;                  //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) NSObject * target;                    //@synthesize target=_target - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) void* context;                        //@synthesize context=_context - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSObject *)observer;
-(NSObject *)target;
-(NSString *)keyPath;
-(void*)context;
-(id)initWithObserver:(id)arg1 target:(id)arg2 keyPath:(id)arg3 context:(void*)arg4 ;
@end

