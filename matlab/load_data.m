%global env;
%global commands;

if (strcmp(env.os,'Windows_NT'))
    env.dirName = '..\dataset\';
    env.slash = '\';
else
    env.dirName = '../dataset/';
    env.slash = '/';
end
if (env.reloadData)
    d = dir(env.dirName);
    isub = [d(:).isdir]; %# returns logical vector
    nameFolds = {d(isub).name}';
    nameFolds(ismember(nameFolds,{'.','..'})) = [];
    commands = cell(size(nameFolds,1),1);
    for i=1:size(nameFolds,1)
        disp(strcat('comando: ',nameFolds{i}));
        fileList = getAllFiles(strcat(env.dirName,nameFolds{i}));
        audioFiles = cell(size(fileList,1),3);
        for j=1:size(fileList,1)
            [audioFiles{j,1}, audioFiles{j,2}] = audioread(fileList{j});
            audioFiles{j,3} = fileList{j};
        end
        commands{i}.description = nameFolds{i};
        commands{i}.audio = audioFiles;
    end
    clearvars audioFiles d dirName fileList i isub j nameFolds;
    save(strcat('mat',env.slash,'audio_loaded.mat'),'commands');
else
    load(strcat('mat',env.slash,'audio_loaded.mat'));
end