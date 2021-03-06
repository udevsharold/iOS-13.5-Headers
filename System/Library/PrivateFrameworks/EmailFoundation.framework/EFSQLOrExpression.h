/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFSQLCompoundExpression.h>

@class NSArray, NSString;

@interface EFSQLOrExpression : NSObject <EFSQLCompoundExpression> {

	NSArray* _expressions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
@property (nonatomic,copy,readonly) NSArray * expressions;                    //@synthesize expressions=_expressions - In the implementation block
-(NSString *)ef_SQLExpression;
-(id)initWithExpressions:(id)arg1 ;
-(NSArray *)expressions;
@end

