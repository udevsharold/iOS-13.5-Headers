/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, TDThemeBitSource, TDTemplateRenderingMode;

@interface TDAsset : NSManagedObject {

	unsigned _scaleFactor;

}

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * category; 
@property (nonatomic,retain) TDThemeBitSource * source; 
@property (nonatomic,readonly) NSString * baseName; 
@property (nonatomic,retain) TDTemplateRenderingMode * templateRenderingMode; 
+(unsigned)scaleFactorFromImageFilename:(id)arg1 ;
+(id)_filenameRegex;
+(BOOL)isTemplateFromImageFilename:(id)arg1 ;
+(long long)idiomFromImageFilename:(id)arg1 ;
+(long long)subtypeFromImageFilename:(id)arg1 ;
-(unsigned)scaleFactor;
-(void)setScaleFactor:(unsigned)arg1 ;
-(NSString *)baseName;
-(id)fileURLWithDocument:(id)arg1 ;
-(BOOL)hasProduction;
-(id)_sourceRelativePathComponents;
-(id)sourceRelativePath;
-(void)setHasProduction:(id)arg1 ;
@end
