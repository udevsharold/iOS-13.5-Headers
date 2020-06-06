/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSString, NSSet;

@interface CIFeatureProviderImage : NSObject <MLFeatureProvider> {

	NSString* name;
	CVBufferRef buffer;

}

@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) CVBufferRef buffer; 
@property (nonatomic,readonly) NSSet * featureNames; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(void)setBuffer:(CVBufferRef)arg1 ;
-(CVBufferRef)buffer;
-(id)initWithName:(id)arg1 buffer:(CVBufferRef)arg2 ;
@end

