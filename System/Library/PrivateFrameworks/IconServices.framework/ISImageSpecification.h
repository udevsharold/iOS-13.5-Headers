/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IconServices/IconServices-Structs.h>
@interface ISImageSpecification : NSObject {

	double _scale;
	ISImageSpecification* _smallerSpecification;
	ISImageSpecification* _largerSpecification;
	CGSize _size;

}

@property (readonly) CGSize size;                                              //@synthesize size=_size - In the implementation block
@property (readonly) double scale;                                             //@synthesize scale=_scale - In the implementation block
@property (readonly) ISImageSpecification * smallerSpecification;              //@synthesize smallerSpecification=_smallerSpecification - In the implementation block
@property (readonly) ISImageSpecification * largerSpecification;               //@synthesize largerSpecification=_largerSpecification - In the implementation block
-(CGSize)size;
-(double)scale;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(void)setLargerSpecification:(ISImageSpecification *)arg1 ;
-(void)setSmallerSpecification:(ISImageSpecification *)arg1 ;
-(ISImageSpecification *)smallerSpecification;
-(ISImageSpecification *)largerSpecification;
@end

