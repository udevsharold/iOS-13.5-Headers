/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IKFourTuple : NSObject <NSCopying> {

	NSString* _namedStyle;
	long long _specifiedValueCount;
	double _values[4];

}

@property (nonatomic,readonly) NSString * namedStyle;                       //@synthesize namedStyle=_namedStyle - In the implementation block
@property (nonatomic,readonly) IKCornerRadii cornerRadiiValue; 
@property (nonatomic,readonly) UIEdgeInsets edgeInsetsValue; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIEdgeInsets)edgeInsetsValue;
-(id)initWithCornerRadii:(IKCornerRadii)arg1 ;
-(id)initWithStyleString:(id)arg1 ;
-(NSString *)namedStyle;
-(IKCornerRadii)cornerRadiiValue;
@end

