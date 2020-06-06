/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFSQLGeneratorPredicateNode.h>

@protocol EFSQLExpressable;
@class NSArray, NSString;

@interface EFSQLGeneratorComparisonPredicateNode : NSObject <EFSQLGeneratorPredicateNode> {

	NSArray* _keypathGenerators;
	unsigned long long _predicateOperator;
	id<EFSQLExpressable> _constValue;

}

@property (nonatomic,readonly) NSArray * keypathGenerators;                       //@synthesize keypathGenerators=_keypathGenerators - In the implementation block
@property (nonatomic,readonly) unsigned long long predicateOperator;              //@synthesize predicateOperator=_predicateOperator - In the implementation block
@property (nonatomic,readonly) id<EFSQLExpressable> constValue;                   //@synthesize constValue=_constValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)predicateOperator;
-(id)sqlExpressableWithTableExpressions:(id)arg1 ;
-(void)traverseTreeWithAliasMap:(id)arg1 ;
-(NSArray *)keypathGenerators;
-(id<EFSQLExpressable>)constValue;
-(id)initWithKeypathGenerators:(id)arg1 predicateOperator:(unsigned long long)arg2 constValue:(id)arg3 ;
@end

