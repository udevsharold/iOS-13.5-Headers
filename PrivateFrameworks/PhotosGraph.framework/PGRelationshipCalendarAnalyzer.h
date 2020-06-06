/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGRelationshipAnalyzer.h>

@class PGGraphRelationshipProcessor, NSString;

@interface PGRelationshipCalendarAnalyzer : NSObject <PGRelationshipAnalyzer> {

	PGGraphRelationshipProcessor* _processor;

}

@property (nonatomic,__weak,readonly) PGGraphRelationshipProcessor * processor;              //@synthesize processor=_processor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * name; 
-(NSString *)name;
-(PGGraphRelationshipProcessor *)processor;
-(void)runAnalysisWithProgressBlock:(/*^block*/id)arg1 ;
-(id)initWithRelationshipProcessor:(id)arg1 ;
@end

