/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface EFSQLOrderByExpressionGenerator : NSObject {

	BOOL _ascending;
	NSArray* _generators;

}

@property (nonatomic,readonly) NSArray * generators;              //@synthesize generators=_generators - In the implementation block
@property (nonatomic,readonly) BOOL ascending;                    //@synthesize ascending=_ascending - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)ascending;
-(NSArray *)generators;
-(BOOL)isEqualToEFSQLOrderByExpressionGenerator:(id)arg1 ;
-(id)initWithGenerators:(id)arg1 ascending:(BOOL)arg2 ;
-(id)orderByExpression;
@end

