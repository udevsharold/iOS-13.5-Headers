/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLSiriVocabularyService;
@class PLPhotoLibrary;

@interface PLSiriVocabularyUpdater : NSObject {

	id<PLSiriVocabularyService> _vocabularyService;
	PLPhotoLibrary* _photoLibrary;

}
+(void)updateAllVocabulariesInLibrary:(id)arg1 withService:(id)arg2 ;
-(id)init;
-(id)initWithVocabularyService:(id)arg1 photoLibrary:(id)arg2 ;
-(void)updateAllVocabularies;
-(void)_updateAlbumsVocabularyInContext:(id)arg1 ;
-(id)_fetchAlbumDictionariesInContext:(id)arg1 ;
-(void)updateAlbumVocabularyFromAlbumDictionaries:(id)arg1 ;
-(id)albumTitlesFromDictionaries:(id)arg1 ;
-(id)localizedTitleForAlbumDictionary:(id)arg1 ;
-(void)_updateContactsVocabularyInContext:(id)arg1 ;
-(id)_fetchPersonDictionariesInContext:(id)arg1 ;
-(void)updateContactVocabularyFromPersonDictionaries:(id)arg1 ;
-(id)personNamesFromDictionaries:(id)arg1 ;
@end
