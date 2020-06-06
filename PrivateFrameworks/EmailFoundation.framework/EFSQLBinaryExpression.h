/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFSQLBitExpressable.h>
#import <libobjc.A.dylib/EFSQLExpressable.h>

@protocol EFSQLExpressable;
@class NSString;

@interface EFSQLBinaryExpression : NSObject <EFSQLBitExpressable, EFSQLExpressable> {

	id<EFSQLExpressable> _left;
	id<EFSQLExpressable> _right;
	unsigned long long _binaryOperator;

}

@property (nonatomic,readonly) id<EFSQLExpressable> left;                      //@synthesize left=_left - In the implementation block
@property (nonatomic,readonly) id<EFSQLExpressable> right;                     //@synthesize right=_right - In the implementation block
@property (nonatomic,readonly) unsigned long long binaryOperator;              //@synthesize binaryOperator=_binaryOperator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
-(id<EFSQLExpressable>)left;
-(id<EFSQLExpressable>)right;
-(NSString *)ef_SQLExpression;
-(void)setColumnExpression:(id)arg1 ;
-(unsigned long long)binaryOperator;
-(id)_stringForOperator:(unsigned long long)arg1 ;
-(id)initWithLeft:(id)arg1 operator:(unsigned long long)arg2 right:(id)arg3 ;
@end

