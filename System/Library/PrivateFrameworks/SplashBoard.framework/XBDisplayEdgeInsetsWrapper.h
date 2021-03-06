/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SplashBoard/SplashBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface XBDisplayEdgeInsetsWrapper : NSObject <NSCopying, BSXPCCoding, NSSecureCoding> {

	double _topInset;
	double _leftInset;
	double _bottomInset;
	double _rightInset;

}

@property (nonatomic,readonly) double topInset;                     //@synthesize topInset=_topInset - In the implementation block
@property (nonatomic,readonly) double leftInset;                    //@synthesize leftInset=_leftInset - In the implementation block
@property (nonatomic,readonly) double bottomInset;                  //@synthesize bottomInset=_bottomInset - In the implementation block
@property (nonatomic,readonly) double rightInset;                   //@synthesize rightInset=_rightInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)makeWithEdgeInsets:(UIEdgeInsets)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(double)topInset;
-(double)leftInset;
-(double)bottomInset;
-(double)rightInset;
-(id)initWithTop:(double)arg1 left:(double)arg2 bottom:(double)arg3 right:(double)arg4 ;
-(BOOL)hasZeroInsets;
@end

