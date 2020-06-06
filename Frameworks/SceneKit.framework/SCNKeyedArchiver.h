/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSKeyedArchiver.h>

@class NSDictionary;

@interface SCNKeyedArchiver : NSKeyedArchiver {

	BOOL skipMorphTargets;
	NSDictionary* options;

}

@property (assign,nonatomic) BOOL skipMorphTargets; 
@property (nonatomic,copy) NSDictionary * options; 
+(id)archivedDataWithRootObject:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setSkipMorphTargets:(BOOL)arg1 ;
-(BOOL)skipMorphTargets;
@end

