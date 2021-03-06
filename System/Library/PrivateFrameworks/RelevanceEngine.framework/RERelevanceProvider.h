/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RERelevanceProviderEnvironment;

@interface RERelevanceProvider : NSObject <NSCopying> {

	unsigned long long _cachedHash;
	unsigned long long _priority;
	RERelevanceProviderEnvironment* _environment;

}
+(id)relevanceSimulatorID;
+(id)customRelevanceProviderForFeature:(id)arg1 withValue:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)_hash;
-(id)environment;
-(void)setEnvironment:(id)arg1 ;
-(id)dictionaryEncoding;
-(unsigned long long)relevancePriority;
-(id)providerWithPriority:(unsigned long long)arg1 ;
@end

