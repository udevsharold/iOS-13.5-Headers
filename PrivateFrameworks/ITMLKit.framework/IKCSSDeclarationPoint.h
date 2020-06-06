/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKCSSDeclaration.h>

@interface IKCSSDeclarationPoint : IKCSSDeclaration {

	double _value;
	unsigned long long _unit;

}

@property (assign,nonatomic) double value;                         //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) unsigned long long unit;              //@synthesize unit=_unit - In the implementation block
-(id)description;
-(id)stringValue;
-(double)value;
-(unsigned long long)unit;
-(void)setValue:(double)arg1 ;
-(id)number;
-(void)setUnit:(unsigned long long)arg1 ;
-(id)initWithParseDeclaration:(id)arg1 info:(id)arg2 ;
@end

