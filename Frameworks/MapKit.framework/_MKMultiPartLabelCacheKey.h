/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString;

@interface _MKMultiPartLabelCacheKey : NSObject <NSCopying> {

	NSAttributedString* _attributedString;
	CGSize _size;

}

@property (nonatomic,copy,readonly) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,readonly) CGSize size;                                             //@synthesize size=_size - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(NSAttributedString *)attributedString;
-(id)initWithAttributedString:(id)arg1 size:(CGSize)arg2 ;
@end

