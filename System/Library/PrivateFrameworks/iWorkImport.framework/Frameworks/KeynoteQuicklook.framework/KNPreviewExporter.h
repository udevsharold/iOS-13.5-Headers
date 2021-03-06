/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/KeynoteQuicklook.framework/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KeynoteQuicklook-Structs.h>
#import <KeynoteQuicklook/KNSlideExporter.h>
#import <libobjc.A.dylib/TSKImageExporter.h>

@class NSString, TSUProgress;

@interface KNPreviewExporter : KNSlideExporter <TSKImageExporter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isCancelled; 
@property (nonatomic,readonly) TSUProgress * progress; 
@property (nonatomic,readonly) BOOL needsSupplementalFiles; 
@property (nonatomic,copy) NSString * typeUTI; 
@property (nonatomic,readonly) NSString * savePanelMessage; 
@property (nonatomic,readonly) NSString * documentSpecificTypeUTI; 
@property (nonatomic,readonly) BOOL isExportSupported; 
@property (nonatomic,readonly) BOOL canExportInBackground; 
@property (nonatomic,readonly) CGRect boundsRect; 
@property (nonatomic,readonly) CGRect unscaledClipRect; 
@property (nonatomic,readonly) double progressForCurrentPage; 
@property (nonatomic,readonly) unsigned long long pageCount; 
@property (assign,nonatomic) BOOL paginate; 
@property (assign,nonatomic) unsigned long long width; 
@property (assign,nonatomic) unsigned long long height; 
@property (assign,nonatomic) BOOL scaleToFit; 
-(unsigned long long)width;
-(unsigned long long)height;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(void)setup;
-(BOOL)scaleToFit;
-(void)setScaleToFit:(BOOL)arg1 ;
-(id)p_renderingExporterDelegate;
@end

