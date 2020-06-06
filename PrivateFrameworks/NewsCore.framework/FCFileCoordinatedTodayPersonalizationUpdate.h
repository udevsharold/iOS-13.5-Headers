/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayPersonalizationUpdate : NSObject {

	FCFileCoordinatedDictionary* _fileCoordinatedDictionary;

}

@property (nonatomic,retain) FCFileCoordinatedDictionary * fileCoordinatedDictionary;              //@synthesize fileCoordinatedDictionary=_fileCoordinatedDictionary - In the implementation block
-(id)init;
-(id)initWithFileURL:(id)arg1 ;
-(void)clearUpdates;
-(void)readWithAccessor:(/*^block*/id)arg1 ;
-(FCFileCoordinatedDictionary *)fileCoordinatedDictionary;
-(void)setFileCoordinatedDictionary:(FCFileCoordinatedDictionary *)arg1 ;
-(void)submitUpdate:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

