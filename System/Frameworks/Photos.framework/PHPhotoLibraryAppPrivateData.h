/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLAppPrivateData, PHPhotoLibrary;

@interface PHPhotoLibraryAppPrivateData : NSObject {

	PLAppPrivateData* _impl;
	PHPhotoLibrary* _photoLibrary;

}

@property (retain) PLAppPrivateData * impl;                    //@synthesize impl=_impl - In the implementation block
@property (__weak) PHPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
+(BOOL)accessInstanceVariablesDirectly;
-(id)debugDescription;
-(void)invalidate;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(id)dictionaryWithValuesForKeys:(id)arg1 ;
-(void)setValuesForKeysWithDictionary:(id)arg1 ;
-(PLAppPrivateData *)impl;
-(void)setImpl:(PLAppPrivateData *)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(id)initWithLibrary:(id)arg1 ;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(void)_handleWriteException:(id)arg1 ;
@end

