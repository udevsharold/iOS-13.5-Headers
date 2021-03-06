/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchML/TouchML-Structs.h>
#import <libobjc.A.dylib/TMLVectorJSExports.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TMLVector : NSObject <TMLVectorJSExports, NSCopying> {

	CGVector _vector;

}

@property (nonatomic,readonly) CGVector vector;              //@synthesize vector=_vector - In the implementation block
@property (nonatomic,readonly) double dx; 
@property (nonatomic,readonly) double dy; 
+(void)initializeJSContext:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)CGVectorValue;
-(double)dx;
-(id)initWithVector:(CGVector)arg1 ;
-(CGVector)vector;
-(double)dy;
@end

