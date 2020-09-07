/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _LSQueryContext : NSObject {

	id _resolver;

}

@property (readonly) id<_LSQueryResolving> _resolver; 
+(id)defaultContext;
+(void)setSimulateLimitedMappingForXCTests:(BOOL)arg1 ;
+(BOOL)simulateLimitedMappingForXCTests;
-(id)init;
-(id)debugDescription;
-(id)_init;
-(void)enumerateResolvedResultsOfQuery:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)resolveQueries:(id)arg1 error:(id*)arg2 ;
-(id<_LSQueryResolving>)_resolver;
-(void)clearCaches;
-(id)_resolveQueries:(id)arg1 XPCConnection:(id)arg2 error:(id*)arg3 ;
@end
