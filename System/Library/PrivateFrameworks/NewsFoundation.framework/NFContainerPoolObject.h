/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NFContainerPoolObject : NSObject {

	unsigned long long _ownership;
	id _strongObject;
	id _weakObject;

}

@property (nonatomic,readonly) unsigned long long ownership;              //@synthesize ownership=_ownership - In the implementation block
@property (nonatomic,readonly) id strongObject;                           //@synthesize strongObject=_strongObject - In the implementation block
@property (nonatomic,__weak,readonly) id weakObject;                      //@synthesize weakObject=_weakObject - In the implementation block
@property (nonatomic,readonly) id object; 
-(id)object;
-(id)weakObject;
-(id)strongObject;
-(id)initWithObject:(id)arg1 ownership:(unsigned long long)arg2 ;
-(unsigned long long)ownership;
@end
