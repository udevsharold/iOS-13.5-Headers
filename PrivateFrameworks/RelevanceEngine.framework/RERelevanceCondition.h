/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RERelevanceCondition : NSObject <NSCopying> {

	/*^block*/id _condition;

}
+(id)conditionWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)_hash;
-(id)initWithCondtionBlock:(/*^block*/id)arg1 ;
-(float)_evaluateRelevanceWithEnvironment:(id)arg1 ;
@end

