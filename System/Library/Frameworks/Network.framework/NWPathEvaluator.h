/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_path_evaluator;
@class NWEndpoint, NSObject, NWPath, NWParameters;

@interface NWPathEvaluator : NSObject {

	NWEndpoint* _endpoint;
	NSObject*<OS_nw_path_evaluator> _internalEvaluator;
	NWPath* _internalPath;
	NWParameters* _parameters;

}

@property (readonly) NSObject*<OS_nw_path_evaluator> internalEvaluator;              //@synthesize internalEvaluator=_internalEvaluator - In the implementation block
@property (retain) NWPath * internalPath;                                            //@synthesize internalPath=_internalPath - In the implementation block
@property (readonly) NWParameters * parameters;                                      //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) NWPath * path; 
@property (nonatomic,readonly) NWEndpoint * endpoint;                                //@synthesize endpoint=_endpoint - In the implementation block
+(void)initialize;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)copySavedPathEvaluatorForEndpoint:(id)arg1 parameters:(id)arg2 ;
+(void)savePathEvaluator:(id)arg1 ;
+(id)sharedDefaultEvaluator;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NWPath *)path;
-(NWEndpoint *)endpoint;
-(NWParameters *)parameters;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 ;
-(NWPath *)internalPath;
-(void)setInternalPath:(NWPath *)arg1 ;
-(id)initWithEvaluator:(id)arg1 parameters:(id)arg2 ;
-(id)initWithBrowseDescriptor:(id)arg1 parameters:(id)arg2 ;
-(id)initWithListenParameters:(id)arg1 ;
-(id)copyPath;
-(void)triggerPathAgentsIncludingVoluntary:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)satisfyPathAgentsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)triggerVoluntaryPathAgentsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)requestNexus;
-(BOOL)matchesEndpoint:(id)arg1 parameters:(id)arg2 ;
-(NSObject*<OS_nw_path_evaluator>)internalEvaluator;
@end
