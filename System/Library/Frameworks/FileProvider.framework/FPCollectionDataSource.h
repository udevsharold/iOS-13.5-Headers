/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FPCollectionDataSource
@property (nonatomic,readonly) BOOL hasMoreIncoming; 
@property (assign,nonatomic,__weak) id<FPCollectionDataSourceDelegate> delegate; 
@required
-(void)invalidate;
-(id<FPCollectionDataSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)start;
-(void)enumerationMightHaveResumed;
-(BOOL)hasMoreIncoming;

@end

