/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGGraphIngestBaby.h>

@class NSSet, NSMutableSet, NSString;

@interface PGBaby : NSObject <PGGraphIngestBaby> {

	NSMutableSet* _momentNodes;
	NSMutableSet* _caretakerNodes;

}

@property (nonatomic,readonly) NSMutableSet * momentNodes;                 //@synthesize momentNodes=_momentNodes - In the implementation block
@property (nonatomic,readonly) NSMutableSet * caretakerNodes;              //@synthesize caretakerNodes=_caretakerNodes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableSet *)momentNodes;
-(NSMutableSet *)caretakerNodes;
-(id)initWithMomentNodes:(id)arg1 caretakerNodes:(id)arg2 ;
@end

