/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary;

@interface DKReportingConcurrentRequestGroup : NSObject {

	NSMutableSet* _requests;
	NSMutableDictionary* _requestLookupByGenerator;
	NSMutableSet* _resources;

}

@property (nonatomic,retain) NSMutableSet * resources;                                    //@synthesize resources=_resources - In the implementation block
@property (nonatomic,retain) NSMutableSet * requests;                                     //@synthesize requests=_requests - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requestLookupByGenerator;              //@synthesize requestLookupByGenerator=_requestLookupByGenerator - In the implementation block
-(id)init;
-(NSMutableSet *)requests;
-(void)setRequests:(NSMutableSet *)arg1 ;
-(NSMutableSet *)resources;
-(void)setResources:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)requestLookupByGenerator;
-(BOOL)addComponentIdentity:(id)arg1 usingGenerator:(id)arg2 ;
-(void)setRequestLookupByGenerator:(NSMutableDictionary *)arg1 ;
@end
