/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKStrokeRenderCache.h>

@class NSMutableArray, NSArray, NSString;

@interface PKMetalParticleRenderCache : NSObject <PKStrokeRenderCache> {

	NSMutableArray* _buffers;
	unsigned long long _totalCost;
	unsigned long long _inkVersion;

}

@property (nonatomic,readonly) NSArray * buffers; 
@property (nonatomic,readonly) unsigned long long inkVersion;              //@synthesize inkVersion=_inkVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)lockPurgeableResourcesAddToSet:(id)arg1 ;
-(unsigned long long)inkVersion;
-(unsigned long long)cacheCost;
-(BOOL)needsCompute;
-(void)addBuffer:(id)arg1 ;
-(NSArray *)buffers;
-(id)initWithDevice:(id)arg1 inkVersion:(unsigned long long)arg2 ;
@end

