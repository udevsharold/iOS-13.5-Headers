/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSLocale;


@protocol PLMutableDateRangeFormatter <NSObject>
@property (assign,nonatomic) BOOL autoUpdateOnChanges; 
@property (assign,nonatomic) BOOL useLocalDates; 
@property (nonatomic,retain) NSLocale * locale; 
@property (assign,nonatomic) BOOL shouldOmitYear; 
@required
-(void)setLocale:(id)arg1;
-(NSLocale *)locale;
-(void)setShouldOmitYear:(BOOL)arg1;
-(void)setUseLocalDates:(BOOL)arg1;
-(void)setAutoUpdateOnChanges:(BOOL)arg1;
-(void)configureForFormatPreset:(unsigned long long)arg1;
-(BOOL)autoUpdateOnChanges;
-(BOOL)useLocalDates;
-(BOOL)shouldOmitYear;

@end

