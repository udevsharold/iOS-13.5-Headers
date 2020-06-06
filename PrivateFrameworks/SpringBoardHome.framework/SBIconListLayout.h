/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SBHIconAccessoryVisualConfiguration, SBHFolderIconVisualConfiguration, SBHClockIconVisualConfiguration, SBHFloatyFolderVisualConfiguration, SBHSidebarVisualConfiguration;


@protocol SBIconListLayout <NSObject>
@property (nonatomic,readonly) unsigned long long maximumIconCount; 
@property (nonatomic,readonly) SBIconImageInfo iconImageInfo; 
@property (nonatomic,copy,readonly) SBHIconAccessoryVisualConfiguration * iconAccessoryVisualConfiguration; 
@property (nonatomic,copy,readonly) SBHFolderIconVisualConfiguration * folderIconVisualConfiguration; 
@property (nonatomic,copy,readonly) SBHClockIconVisualConfiguration * clockIconVisualConfiguration; 
@property (nonatomic,copy,readonly) SBHFloatyFolderVisualConfiguration * floatyFolderVisualConfiguration; 
@property (nonatomic,copy,readonly) SBHSidebarVisualConfiguration * sidebarVisualConfiguration; 
@property (nonatomic,readonly) BOOL usesAlternateLayout; 
@optional
-(SBHIconAccessoryVisualConfiguration *)iconAccessoryVisualConfiguration;
-(SBHFolderIconVisualConfiguration *)folderIconVisualConfiguration;
-(SBHFloatyFolderVisualConfiguration *)floatyFolderVisualConfiguration;
-(SBHClockIconVisualConfiguration *)clockIconVisualConfiguration;
-(SBHSidebarVisualConfiguration *)sidebarVisualConfiguration;
-(id)labelVisualConfigurationForContentSizeCategory:(id)arg1 options:(unsigned long long)arg2;
-(id)labelFontForContentSizeCategory:(id)arg1 options:(unsigned long long)arg2;
-(BOOL)usesAlternateLayout;
-(void)noteIcons:(id)arg1 didDropAtCoordinate:(SBIconCoordinate)arg2 inList:(id)arg3;
-(id)accessoryFontForContentSizeCategory:(id)arg1 options:(unsigned long long)arg2;

@required
-(SBIconImageInfo)iconImageInfo;
-(unsigned long long)maximumIconCount;
-(unsigned long long)numberOfColumnsForOrientation:(long long)arg1;
-(unsigned long long)numberOfRowsForOrientation:(long long)arg1;
-(UIEdgeInsets*)layoutInsetsForOrientation:(long long)arg1;
-(SBIconCoordinate*)iconCoordinateForIndex:(unsigned long long)arg1 forOrientation:(long long)arg2 inList:(id)arg3;

@end

