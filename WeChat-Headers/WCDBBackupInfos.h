//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface WCDBBackupInfos : NSObject
{
    NSMutableArray *m_backupInfos;
    _Bool m_sortedDirty;
}

- (void).cxx_destruct;
- (id)infoForBackup;
- (id)infoForRestore;
- (void)sortInfos;
- (void)addBackupInfoWithPath:(id)arg1;
- (id)init;

@end
